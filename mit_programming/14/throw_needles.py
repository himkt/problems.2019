# -*- coding: utf-8 -*-

import random

def throwNeedles(numNeedles):
  inCircle = 0
  for Needles in xrange(1,numNeedles+1):
    x = random.random()
    y = random.random()
    if(x*x+y*y)**0.5 <= 1.0:
      inCircle += 1
  return 4*(inCircle/float(numNeedles))

def getEst(numNeedles,numTrials):
  estimates = []
  for t in range(numTrials):
    piGuess = throwNeedles(numNeedles)
    estimates.append(piGuess)

  # this function(stdDev) does not exist in text book.
  # i probably have to define this function on my own
  sDev = 0
  #sDev = stdDev(estimates)
  curEst = sum(estimates)/len(estimates)
  print 'Est.=' + str(round(curEst,5)) +\
      ', Std. dev. =' + str(round(sDev,5))\
      + ', Needles =' + str(numNeedles)
  return (curEst, sDev)

def estPi(precision,numTrials):
  numNeedles = 1000
  sDev = precision
  while sDev >= precision / 2.0:
    curEst, sDev = getEst(numNeedles,numTrials)
    numNeedles = 2
  return curEst

estPi(0.01,1000)
