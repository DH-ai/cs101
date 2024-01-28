#include<simplecpp>




main_program {
	turtleSim();
	
	repeat(2) {
        forward(100);
        right(90);
        forward(50);
        right(90);
    }
	left(60);
	forward(20);
	right(120);
	forward(20);
	left(60);
	forward(60);
	left(60);
	forward(20);
	right(120);
	forward(20);
	right(120);
	forward(50);
	left(90);
	penUp();
	forward(15);
	right(90);
	penDown();
	forward(5);
	left(120);
	forward(10);
	left(120);
	forward(10);
	left(120);
	forward(10);
	penUp();
	left(120);
	forward(10);
	right(30);
	forward(20);
	penDown();
	right(30);
	forward(100);
	left(120);
	forward(100);
	left(120);
	forward(100);
	right(180);
	forward(100);
	left(120);
	int i =1;
	repeat(5){
		right(i*90);
		forward(20);
		i*=-1;
	}
	wait(2);
	penUp();
	forward(200);
	
	wait(5);
}


