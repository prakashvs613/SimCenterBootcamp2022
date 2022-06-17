def square(x):
    return x*x

# print(__name__) # name of the file, not function

# do a demo if the function is run directly
if __name__ == '__main__':
    # print('Hi there!')
    x = 2.5
    print(f'{x}^2 = {square(x)}')