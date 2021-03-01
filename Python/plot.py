import numpy
import matplotlib.pyplot as plt
t = numpy.linspace(-3.0,3.0,1000)
plt.tlim(0,4)
f = 2*numpy.exp((complex(-0.5,8))*t)
plt.subplot(221)
plt.title(u'real')
plt.plot(t,numpt.real(f))

plt.subplot(222)
plt.title(u'imag')
plt.plot(t,numpt.imag(f))

plt.subplot(223)
plt.title(u'abs')
plt.plot(t,numpt.abs(f))

plt.subplot(224)
plt.title(u'angle')
plt.plot(t,numpt.angle(f))