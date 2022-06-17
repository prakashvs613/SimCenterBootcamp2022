def square(x):
    return x*x

<<<<<<< HEAD
# print(__name__) # name of the file, not function

# do a demo if the function is run directly
if __name__ == '__main__':
    # print('Hi there!')
    x = 2.5
    print(f'{x}^2 = {square(x)}')
=======
if __name__ == '__main__':
    x = 2.345
    print("{}^2 = {}".format(x, square(x)))
>>>>>>> upstream/main
