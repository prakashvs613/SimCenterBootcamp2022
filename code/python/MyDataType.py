import copy

class MyDataType():

    def __init__(self, first_name = 'Jane', last_name = 'Doe', yob = '1972'):
        self.first_name = first_name
        self.last_name = last_name
        self.email = 'jane.doe@website.com'
        self.phone = '+1 234 567 8901'
        self.YOB = yob
        self.has_a_friend = 'none'
        # more here

    def __str__(self):
        s = \
"""
{} {}
email: {}
phone: {}
year: {}""".format(self.first_name, self.last_name,
        self.email, self.phone, self.YOB)

        if self.has_a_friend:
            s += "\nI have friend(s)"
        return s

        #
        # def __repr__(self):
        #     return "Student ({},{},u={},v={})".format(self.first_name, self.last_name, self.email, self.phone, self.YOB)

    def __add__(self, other):
        if isinstance(other, MyDataType):
            # print("I am in __add__")
            # print("SELF:\n", self)
            # print("OTHER:\n", other)

            self.has_a_friend = True
            other.has_a_friend = True

            ans = copy(self)
            ans.first_name += ' and ' + other.first_name
        elif isinstance(other, int):
            ans = copy(self)
            ans.YOB -= other
        else:
            ans = None

        return ans

if __name__ == "__main__":

    # student0 = MyDataType()
    student1 = MyDataType(first_name='Jane', yob='1982')
    student2 = MyDataType(first_name='John', yob='2020')
    student2.email = 'john.doe@gmai.com'

    # print(student0)
    print(student1)
    print(student2)
    print("---")

    student1 + student2
    print(student1)
    print(student2)
    print("---")

    student3 = student1 + student2
    print(student3)
    print("---")

    student4 = student1 + 20
    print(student4)
    print("---")
