"""
you are at the side of a river.You are given a m litre jug and a n litre jug where
0<m<n.
Both the jugs are initially empty.The jugs don't have markings to allow
measuring smaller quantities.
you have to use the jugs to measure d litres of water where d<n.
Determine the minimum no of operations to be performed to obtain d litres of water
in one jug.

The operations you can perform are:
1.Empty a jug
2.Fill a jug
3.Pour water from one jug to the other until one of the jugs is either empty or full.

Example 1:
input: m=3,n=5,d=4
Output:6
Explantion:operations are as follow-
1.fill up the 5 litre jug.
2.then fill up the 3 litre jug using 5 litre jug
  now 5 litre jug contains 2 litre water.
3.empty the 3 litre jug.
4.Now pour the 2 litre of water from 5 litre jug to 3 litre jug.
5.Now 3 litre jug contains 2 litre of water and 5 litre jug is empty.
  now fill up the 5 litre jug.
6.Now fill one litre of water from 5 litre jug to 3 litre jug.now we have
  4 litre water in 5 litre jug.

Example 2:
Input:m=8,n=56,d=46
output:-1
explanation:Not possible to fill any one of the jug with 46 litre of water.

Task:
You  need to read and print the output.
Your task is to complete the function minSteps() which takes m, n and d as input parameter
and returns the minimum number of operation to fill d litre of water in any of the two jug.

"""
code:-
def gcd(a, b):
	if b==0:
		return a
	return gcd(b, a%b)
def Pour(toJugCap, fromJugCap, d):

	fromJug = fromJugCap
	toJug = 0

	step = 1
	while ((fromJug is not d) and (toJug is not d)):
		temp = min(fromJug, toJugCap-toJug)
		toJug = toJug + temp
		fromJug = fromJug - temp
		step = step + 1
		if ((fromJug == d) or (toJug == d)):
			break
		if fromJug == 0:
			fromJug = fromJugCap
			step = step + 1
		if toJug == toJugCap:
			toJug = 0
			step = step + 1
	return step
def minSteps(n, m, d):
	if m> n:
		temp = m
		m = n
		n = temp
	if (d%(gcd(n,m)) is not 0):
		return -1
	return(min(Pour(n,m,d), Pour(m,n,d)))
if __name__ == '__main__':
	n=int(input())
	m=int(input())
	d=int(input())
	print('Minimum number of steps required is',minSteps(n, m, d))

