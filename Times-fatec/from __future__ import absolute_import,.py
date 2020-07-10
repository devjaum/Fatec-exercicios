from __future__ import absolute_import, division, print_function, unicode_literals
from tensorflow import keras
import tensorflow as tf
import numpy as np
import git.pyplot as plt

#versão do tensorflow
print(tf.__version__)
#

#baixando database de roupas
fashion_mnist = keras.datasets.fashion_mnist

(train_images, train_labels), (test_images, test_labels) = fashion_mnist.load_data()
#
#Pré-processe os dados
train_images = train_images / 255.0
test_images = test_images / 255.0
#
# No database existem valores para cada imagem, a o class_name nomea todos em sequencia, endo o primeiro 0
class_names = ['Camiseta', 'Calças', 'Pullover', 'Vestido', 'Coat',
               'Sandalha', 'Camisa', 'Tênis', 'Mala', 'Bota no tornozelo']
#
#Montando a rede neural
model = keras.Sequential([
    keras.layers.Flatten(input_shape=(28, 28)),
    keras.layers.Dense(128, activation='relu'),
    keras.layers.Dense(10, activation='softmax')
])
#tf.keras.layers.Flatten, transforma o formato da imagem de um array de imagens de duas dimensões (of 28 by 28 pixels) para um array de uma dimensão (de 28 * 28 = 784 pixels).
#tf.keras.layers.Dense, são camadas neurais densely connected, ou fully connected. A primeira camada Dense tem 128 neurônios. A segunda (e última) camda é uma softmax de 10 neuronios que retorna um array de 10 probabilidades, cuja soma resulta em 1. Cada nó contem um valor que indica a probabilidade de que aquela imagem pertence a uma das 10 classes.
#
#compilando a rede neuraol que voce fez
model.compile(optimizer='adam',
              loss='sparse_categorical_crossentropy',
              metrics=['accuracy'])
#Loss —Essa mede quão precisa o modelo é durante o treinamento. Queremos minimizar a função para guiar o modelo para direção certa.
#Optimizer —Isso é como o modelo se atualiza com base no dado que ele vê e sua função loss.
#Métricas —usadas para monitorar os passos de treinamento e teste. O exemplo abaixo usa a acurácia, a fração das imagens que foram classificadas corretamente.
#
#Treine o modelo
model.fit(train_images, train_labels, epochs=10)
#Fit faz o modelo aprender. Recebendo as imagens e as laibels que tem que ser associadas.
#epochs são o numero de vezes que a ia pode chegar
#
#Testando a acurisidade do modelo
test_loss, test_acc = model.evaluate(test_images,  test_labels, verbose=2)

print('\nTest accuracy:', test_acc)

#Acabou que o a acurácia com o conjunto de teste é um pouco menor do que a acurácia de treinamento. Essa diferença entre as duas acurácias representa um overfitting. Overfitting é modelo de aprendizado de máquina performou de maneira pior em um conjunto de entradas novas, e não usadas anteriormente, que usando o conjunto de treinamento.
#
#Fazer Predição
predictions = model.predict(test_images)
print('Vamos olhar na primeira predição', predictions[0])
#
# Função para vizualizar resultado
def plot_image(i, predictions_array, true_label, img):
  predictions_array, true_label, img = predictions_array[i], true_label[i], img[i]
  plt.grid(False)
  plt.xticks([])
  plt.yticks([])

  plt.imshow(img, cmap=plt.cm.binary)

  predicted_label = np.argmax(predictions_array)
  if predicted_label == true_label:
    color = 'blue'
  else:
    color = 'red'

  plt.xlabel("{} {:2.0f}% ({})".format(class_names[predicted_label],
                                100*np.max(predictions_array),
                                class_names[true_label]),
                                color=color)

def plot_value_array(i, predictions_array, true_label):
  predictions_array, true_label = predictions_array[i], true_label[i]
  plt.grid(False)
  plt.xticks([])
  plt.yticks([])
  thisplot = plt.bar(range(10), predictions_array, color="#777777")
  plt.ylim([0, 1])
  predicted_label = np.argmax(predictions_array)

  thisplot[predicted_label].set_color('red')
  thisplot[true_label].set_color('blue')
#Vamos tentar analisar uma imagem
img = test_images[0]
print(img.shape)
# Adiciona a imagem em um batch que possui um só membro.
img = (np.expand_dims(img,0))

print(img.shape)
#prediremos a label para essa imagem
predictions_single = model.predict(img)
#
#printando o resultado
print(predictions_single)
plot_value_array(0, predictions_single, test_labels)
_ = plt.xticks(range(10), class_names, rotation=45)
plt.show()
#
#