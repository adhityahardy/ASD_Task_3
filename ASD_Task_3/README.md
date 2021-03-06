# Task_3 [2019]
Task 3 : Double Linked List 

# DEADLINE = FEBRUARY 25TH, 2019 - 23:59

## Reading Material
* [git cheat sheet](https://education.github.com/git-cheat-sheet-education.pdf)
* [markdown cheat sheet](https://enterprise.github.com/downloads/en/markdown-cheatsheet.pdf)

## Workflow
1. FORK this repositori ASD_Task_3 to your GitHub account
2. CLONE ASD_Task_3 repository from YOUR OWN ACCOUNT
3. open and modify codes in *.cpp and *.h files inside project ASD_Task_3
4. write your code inside the provided space in each functions/procedures 
5. COMMIT and PUSH your project to your account
6. create a Pull Request


Create a program to store and manage a data using double linear linked list


## TO DO

### mydata.h
TODO:  create a new Data type with specification:
		- an integer variable acted as an ID
		- string name
		- integer rank
		- float score


### mydata.cpp
* `mytype create_data()`<br>
	TODO: receive input from user and assign the value of new data
* `view_data(mytype d)`<br>
	TODO:  view the content of data d
* `edit_data(mytype &d)`<br>
	TODO:  edit the value of data d, the ID must not be modified

You may just copy your previous result


### list.h
Create ADT of double linked list
* define a function and a procedure to allocate and deallocate an element list
  * `function allocate(in: x : infotype) : address`
  * `procedure deallocate( i/o: P : address )`
  
* define insert and delete procedure
  * `procedure insertFirst( i/o: L : List, i: P : address )`
  * `procedure insertLast( i/o: L : List, i: P : address )`
  * `procedure insertAfter(i/o: L : List, i: Prec : address, P : address )`
  * `procedure deleteFirst( i/o: L : List, i/o: P : address )`
  * `procedure deleteLast( i/o: L : List, i/o: P : address )`
  * `procedure deleteAfter(i/o: L : List, i: Prec : address, i/o: P : address )`

* define search-by-ID function and view procedure
  * `function findElm( i: L : List, x : infotype ) : address`
  * `procedure viewList( i: L : List )`
  

### operation.h
* define insertion procedure
  * `procedure insertAndSort( i: L : List, x : infotype )`<br>
	TODO: insert a new element into an already sorted-by-ID List L, <br>
	so that the elements inside List L is still sorted by ID<br>
	procedure must also check if such ID is already exists (No Duplicate ID)<br>
	If new data has duplicate ID, new data is rejected.
* define deletebyID function
  * `procedure deletebyID( i/o : L : List, x_id : integer )`<br>
    TODO: delete an element in List based on it's ID
* define savePassedMember procedure
  * `savePassedMember( i/o: L : List, L2 : List )`<br>
    TODO: move any element from List L that has score greater than 80 into List L2
  
### list.cpp
Implement function and procedure defined in list.h


### operation.cpp
Implement function and procedure defined in operation.h

### main.cpp
Create a main menu to run your application <br>
Menu Application:
   1. insert new data
   2. print all data
   3. find and print a data (search by ID)
   4. edit data by ID
   5. delete data by ID
   0. exit
  
   
### CRITERIA
ID is unique, check whether ID is already exsits when inserting new element
