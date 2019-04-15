import tensorflow as tf

x1= constant(1)
x2=constant(2)

res = tf.multiply(x1,x2)

print(res)

with Session as sess:
	res = tf.multiply(x1,x2)
	print(res)

print(res)