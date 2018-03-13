for i in xrange(1,100):
	fizzbuzz = ""
	if (i%3 == 0):
		fizzbuzz += "Fizz"
	if (i%5 == 0):
		fizzbuzz += "Buzz"
	if (i%3 != 0 and i%5 != 0):
		print(i)
	else:
		print(fizzbuzz)
