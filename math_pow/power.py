def power(base, exp):
	result=base**exp
	return result

def main():
	x=int(input("Enter the base number: "))
	y=int(input("Enter the exponent: "))
	print('The result is {}'.format(power(x,y)))


if __name__ == '__main__':
	main()