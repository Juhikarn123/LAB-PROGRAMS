'''
There are one meeting room in a firm.There are N meetings in the form of (start[i],end[i])
where start[i] is the start time of meeting i and end[i] is finish time of meeting i.
 What is the maximum number of meetings that can be accommodated in the meeting room
 when only one meeting can be held in the meeting room at a particular time?
 Note: Start time of one chosen meeting can't be equal to the end time of the other
 chosen meeting.

 Example 1:
 Input:
 N=6
 start[]={1,3,0,5,8,5}
 end[]={2,4,6,7,9,9}
 Output:
 4
 Explanation:
 Maximum four meetings can be held with given start and end timings.
 The meetings are-(1,2),(3,4),(5,7) and (8,9)

 Example 2:
 Input:
 N=3
 start[]={10,12,20}
 end[]={20,25,30}
 Output:
 1
 Explanation:
 only one meetings can be held with the given start and end timings.

 Your Task:
 You need to read inputs and print the output.complete the function maxMeetings()
 that takes two arrays start[] and end[] along with their size N as input parameters
 that can be held in the meeting room.

 '''
