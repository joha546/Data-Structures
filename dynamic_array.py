# Python 3 program deals with all operation of a dynamic array
# add, remove, resize memory of array is the main feature


class DynamicArray:

	# create three variable array[] is a array,
	# count will deal with no of element add by you and
	# size will with size of array[]
	array = None
	count = 0
	size = 0

	# constructor initialize value to variable
	def __init__(self):
		self.array = [0] * (1)
		self.count = 0
		self.size = 1

	# function add an element at the end of array
	def add(self, data):

		# check no of element is equal to size of array
		if (self.count == self.size):
			self.growSize()

		# insert element at end of array
		self.array[self.count] = data
		self.count += 1

	# function makes size double of array
	def growSize(self):
		temp = None
		if (self.count == self.size):

			# temp is a double size array of array
			# and store array elements
			temp = [0] * (self.size * 2)
			i = 0
			while (i < self.size):

				# copy all array value into temp
				temp[i] = self.array[i]
				i += 1

		# double size array temp initialize
		# into variable array again
		self.array = temp

		# and make size is double also of array
		self.size = self.size * 2

	# function shrink size of array
	# which block unnecessary remove them
	def shrinkSize(self):
		temp = None
		if (self.count > 0):

			# temp is a count size array
			# and store array elements
			temp = [0] * (self.count)
			i = 0
			while (i < self.count):

				# copy all array value into temp
				temp[i] = self.array[i]
				i += 1
			self.size = self.count

			# count size array temp initialize
			# into variable array again
			self.array = temp

	# function add an element at given index
	def addAt(self, index, data):

		# if size is not enough make size double
		if (self.count == self.size):
			self.growSize()
		i = self.count - 1
		while (i >= index):

			# shift all element right
			# from given index
			self.array[i + 1] = self.array[i]
			i -= 1

		# insert data at given index
		self.array[index] = data
		self.count += 1

	# function remove last element or put
	# zero at last index
	def remove(self):
		if (self.count > 0):
			self.array[self.count - 1] = 0
			self.count -= 1
	# function shift all element of right
	# side from given index in left

	def removeAt(self, index):
		if (self.count > 0):
			i = index
			while (i < self.count - 1):

				# shift all element of right
				# side from given index in left
				self.array[i] = self.array[i + 1]
				i += 1
			self.array[self.count - 1] = 0
			self.count -= 1

	@staticmethod
	def main(args):
		da = DynamicArray()

		# add 9 elements in array
		da.add(1)
		da.add(2)
		da.add(3)
		da.add(4)
		da.add(5)
		da.add(6)
		da.add(7)
		da.add(8)
		da.add(9)

		# print all array elements after add 9 elements
		print("Elements of array:")
		i = 0
		while (i < da.size):
			print(str(da.array[i]) + " ", end="")
			i += 1
		print()

		# print size of array and no of element
		print("Size of array: " + str(da.size))
		print("No of elements in array: " + str(da.count))

		# shrinkSize of array
		da.shrinkSize()

		# print all array elements
		print("Elements of array after shrinkSize of array:")
		i = 0
		while (i < da.size):
			print(str(da.array[i]) + " ", end="")
			i += 1
		print()

		# print size of array and no of element
		print("Size of array: " + str(da.size))
		print("No of elements in array: " + str(da.count))

		# add an element at index 1
		da.addAt(1, 22)

		# print Elements of array after adding an
		# element at index 1
		print("Elements of array after add an element at index 1:")
		i = 0
		while (i < da.size):
			print(str(da.array[i]) + " ", end="")
			i += 1
		print()

		# print size of array and no of element
		print("Size of array: " + str(da.size))
		print("No of elements in array: " + str(da.count))

		# delete last element
		da.remove()

		# print Elements of array after delete last
		# element
		print("Elements of array after delete last element:")
		i = 0
		while (i < da.size):
			print(str(da.array[i]) + " ", end="")
			i += 1
		print()

		# print size of array and no of element
		print("Size of array: " + str(da.size))
		print("No of elements in array: " + str(da.count))

		# delete element at index 1
		da.removeAt(1)

		# print Elements of array after delete
		# an element index 1
		print("Elements of array after delete element at index 1:")
		i = 0
		while (i < da.size):
			print(str(da.array[i]) + " ", end="")
			i += 1
		print()

		# print size of array and no of element
		print("Size of array: " + str(da.size))
		print("No of elements in array: " + str(da.count))


# Driver code
if __name__ == "__main__":
	DynamicArray.main([])

	# This code is contributed by aadityaburujwale.
