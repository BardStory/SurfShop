#include "variables.h"
#include "header.h"

//when one of the headers is pressed will open that page
void headers() {
	//Profile
	if (x > 780 && x < 870) {
		if (y > 0 && y < 100) {
			accountform();
		}
	}

	//cart
	if (x > 880 && x < 990) {
		if (y > 0 && y < 100) {
			cartform();
		}
	}
	//Back
	if (x > 710 && x < 780) {
		if (y > 0 && y < 100) {
			reset();
		}
	}

}
//checks if the button is being scrolled over
void checkHeaders() {

	//Back
	if (x > 710 && x < 780) {
		if (y > 0 && y < 100) {
			drawback = true;
		}
	}
	//Profile
	if (x > 780 && x < 870) {
		if (y > 0 && y < 100) {
			drawaccount = true;
		}
	}

	//cart
	if (x > 880 && x < 990) {
		if (y > 0 && y < 100) {
			drawcart = true;
		}
	}
	
}

//checks the current location of the mouse on the screen
void mousecheck(){
	//Waivers and Information
	if (x > 50 && x < 300) {
		if (y > 200 && y < 500) {
			draw1 = true;
		}
	}

	//Surfboard Purchases
	if (x > 400 && x < 600) {
		if (y > 200 && y < 500) {
			draw2 = true;
		}
	}

	//Surfboard Rentals
	if (x > 700 && x < 900) {
		if (y > 200 && y < 500) {
			draw3 = true;
		}
	}

	//Equipment rentals
	if (x > 10 && x < 300) {
		if (y > 550 && y < 850) {
			draw4 = true;
		}
	}

	//Book Appointment
	if (x > 400 && x < 650) {
		if (y > 550 && y < 850) {
			draw5 = true;
		}
	}

	//Our Team
	if (x > 680 && x < 900) {
		if (y > 550 && y < 850) {
			draw6 = true;
		}
	}
}

void mousecheck2() {
	if (x > 150 && x < 450) {
		if (y > 400 && y < 800) {
			draw1 = true;
		}
	}
	//Surfboard Purchases
	if (x > 580 && x < 850) {
		if (y > 400 && y < 800) {
			draw2 = true;
		}
	}
}

void mouseWaiver() {
	if (x > 300 && x < 500) {
		if (y > 650 && y < 700) {
			draw1 = true;
			signaturetf = true;
		}
	}
	if (x > 620 && x < 800) {
		if (y > 650 && y < 700) {
			draw2 = true;
			datetf = true;
		}
	}
}

//checks if the mouse button has been pressed on a button
void mousebuttoncheck() {
	//Waivers and Information
	if (x > 50 && x < 300) {
		if (y > 200 && y < 500) {
			waiverAndPersonalform();
		}
	}

	//Surfboard Purchases
	if (x > 400 && x < 600) {
		if (y > 200 && y < 500) {
			surfboardform();
		}
	}

	//Surfboard Rentals
	if (x > 700 && x < 900) {
		if (y > 200 && y < 500) {
			erentalsform();
		}
	}

	//Equipment rentals
	if (x > 10 && x < 300) {
		if (y > 550 && y < 850) {
			
			equipmentform();
		}
	}

	//Book Appointment
	if (x > 400 && x < 650) {
		if (y > 550 && y < 850) {
			appointmentform();
		}
	}

	//Our Team
	if (x > 680 && x < 900) {
		if (y > 550 && y < 850) {
			aboutform();
		}
	}
}

void mousebuttoncheck2() {
	//Personal Form
	if (x > 150 && x < 450) {
		if (y > 400 && y < 800) {
			personalform();
		}
	}
	//Waiver
	if (x > 580 && x < 850) {
		if (y > 400 && y < 800) {
			waiverform();
		}
	}
	//Surfboard
	if (x > 780 && x < 870) {
		if (y > 0 && y < 100) {
			
		}
	}

	//cart
	if (x > 880 && x < 990) {
		if (y > 0 && y < 100) {
		
		}
	}
	//Back
	if (x > 710 && x < 780) {
		if (y > 0 && y < 100) {
			reset();
		}
	}
}

void mousePersonal() {

	//Name
	if (x > 550 && x < 800) {
		if (y > 450 && y < 490) {
			draw1 = true;
			Nametf = true;
		}
	}
	//Age
	if (x > 550 && x < 800) {
		if (y > 500 && y < 525) {
			draw2 = true;
			Agetf = true;
		}
	}
	//Height
	if (x > 550 && x < 800) {
		if (y > 560 && y < 585) {
			draw3 = true;
			Weighttf = true;
		}
	}
	//Weight
	if (x > 550 && x < 800) {
		if (y > 620 && y < 645) {
			draw4 = true;
			Heighttf = true;
		}
	}
	//Age
	if (x > 550 && x < 800) {
		if (y > 680 && y < 705) {
			draw5 = true;
			Boardtf = true;
		}
	}
	//Age
	if (x > 550 && x < 800) {
		if (y > 740 && y < 765) {
			draw6 = true;
			Guardiantf = true;
		}
	}
	//Age
	if (x > 550 && x < 800) {
		if (y > 790 && y < 815) {
			draw7 = true;
			Experiencetf = true;

		}
	}
	//cart
	if (x > 880 && x < 990) {
		if (y > 0 && y < 100) {
			draw8 = true;
		}
	}
	//Back
	if (x > 710 && x < 770) {
		if (y > 0 && y < 100) {
			draw9 = true;
		}
	}
	//Profile
	if (x > 780 && x < 870) {
		if (y > 0 && y < 100) {
			draw0 = true;
		}
	}
}

void submitbuttoncheck() {
	//submit
	

	if (x > 300 && x < 800) {
		if (y > 700 && y < 995) {
			sub = true;

		}
	}
	//Back
	if (x > 710 && x < 780) {
		if (y > 0 && y < 100) {
			reset();
		}
	}
}

void mouseSurfboard() {
	//Name
	if (x > 150 && x < 300) {
		if (y > 370 && y < 700) {
			draw1 = true;
		}
	}
	if (x > 400 && x < 600) {
		if (y > 370 && y < 700) {
			draw2 = true;
		}
	}
	if (x > 650 && x < 850) {
		if (y > 370 && y < 700) {
			draw3 = true;
		}
	}
	//Profile
	if (x > 790 && x < 870) {
		if (y > 0 && y < 100) {
			draw7 = true;
		}
	}

	//cart
	if (x > 880 && x < 990) {
		if (y > 0 && y < 100) {
			draw8 = true;
		}
	}
	//Back
	if (x > 710 && x < 780) {
		if (y > 0 && y < 100) {
			draw9 = true;
		}
	}
}

void resetboard() {
	surfboard1 = false;
	surfboard2 = false;
	surfboard3 = false;
}

void surfboardbuttoncheck() {
	if (y > 110 && y < 190) {
		if (x > 900 && x < 990) {
			resetboard();

		}
	}

	//Name
	if (x > 150 && x < 300) {
		if (y > 370 && y < 700) {
			surfboard1 = true;
		}
	}
	if (x > 400 && x < 600) {
		if (y > 370 && y < 700) {
			surfboard2 = true;
		}
	}
	if (x > 650 && x < 850) {
		if (y > 370 && y < 700) {
			surfboard3 = true;
		}
	}
}

void resetEquip() {
	rentwetsuit = 0;
	renthoods = 0;
	rentboots = 0;
	rentgloves = 0;
	rentboards = 0;
	rentleashes = 0;
	rentfins = 0;
	rentstraps = 0;
}

void mouseRental() {

	if (y > 110 && y < 190) {
		if (x > 900 && x < 990) {
			resetEquip();
			draw0 = true;
		}
	}


	if (y > 200 && y < 250) {
		draw1 = true;
		if (x > 350 && x < 500) {
			rentwetsuit = 1;
		}
		else if (x > 530 && x < 620) {
			rentwetsuit = 2;
		}
		else if (x > 630 && x < 720) {
			rentwetsuit = 3;
		}
		else if (x > 730 && x < 820) {
			rentwetsuit = 4;
		}
		else if (x > 830 && x < 920) {
			rentwetsuit = 5;
		}
	}
	else if (y > 260 && y < 310) {
		draw2 = true;
		if (x > 350 && x < 500) {
			renthoods = 1;
		}
		else if (x > 530 && x < 620) {
			renthoods = 2;
		}
		else if (x > 630 && x < 720) {
			renthoods = 3;
		}
		else if (x > 730 && x < 820) {
			renthoods = 4;
		}
		else if (x > 830 && x < 920) {
			renthoods = 5;
		}
	}
	else if (y > 320 && y < 370) {
		draw3 = true;
		if (x > 350 && x < 500) {
			rentboots = 1;
		}
		else if (x > 530 && x < 620) {
			rentboots = 2;
		}
		else if (x > 630 && x < 720) {
			rentboots = 3;
		}
		else if (x > 730 && x < 820) {
			rentboots = 4;
		}
		else if (x > 830 && x < 920) {
			rentboots = 5;
		}
	}
	else if (y > 380 && y < 410) {
		draw4 = true;
		if (x > 350 && x < 500) {
			rentgloves = 1;
		}
		else if (x > 530 && x < 620) {
			rentgloves = 2;
		}
		else if (x > 630 && x < 720) {
			rentgloves = 3;
		}
		else if (x > 730 && x < 820) {
			rentgloves = 4;
		}
		else if (x > 830 && x < 920) {
			rentgloves = 5;
		}
	}
	else if (y > 470 && y < 520) {
		draw5 = true;
		if (x > 350 && x < 500) {
			rentboards = 1;
		}
		else if (x > 530 && x < 620) {
			rentboards = 2;
		}
		else if (x > 630 && x < 720) {
			rentboards = 3;
		}
		else if (x > 730 && x < 820) {
			rentboards = 4;
		}
		else if (x > 830 && x < 920) {
			rentboards = 5;
		}
	}
	else if (y > 530 && y < 590) {
		draw6 = true;
		if (x > 350 && x < 500) {
			rentleashes = 1;
		}
		else if (x > 530 && x < 600) {
			rentleashes = 2;
		}
		else if (x > 630 && x < 720) {
			rentleashes = 3;
		}
		else if (x > 730 && x < 820) {
			rentleashes = 4;
		}
		else if (x > 830 && x < 920) {
			rentleashes = 5;
		}
	}
	else if (y > 610 && y < 660) {
		draw7 = true;
		if (x > 350 && x < 500) {
			rentfins = 1;
		}
		else if (x > 530 && x < 620) {
			rentfins = 2;
		}
		else if (x > 630 && x < 720) {
			rentfins = 3;
		}
		else if (x > 730 && x < 820) {
			rentfins = 4;
		}
		else if (x > 830 && x < 920) {
			rentfins = 5;
		}
	}
	else if (y > 680 && y < 770) {
		draw8 = true;
		if (x > 350 && x < 500) {
			rentstraps = 1;
		}
		else if (x > 530 && x < 620) {
			rentstraps = 2;
		}
		else if (x > 630 && x < 720) {
			rentstraps = 3;
		}
		else if (x > 730 && x < 820) {
			rentstraps = 4;
		}
		else if (x > 830 && x < 920) {
			rentstraps = 5;
		}
	}
}

void mousePurchase() {

	if (y > 110 && y < 190) {
		if (x > 900 && x < 990) {
			resetEquip();
			draw0 = true;
		}
	}


	if (y > 200 && y < 250) {
		draw1 = true;
		if (x > 350 && x < 500) {
			wetsuit = 1;
		}
		else if (x > 530 && x < 620) {
			wetsuit = 2;
		}
		else if (x > 630 && x < 720) {
			wetsuit = 3;
		}
		else if (x > 730 && x < 820) {
			wetsuit = 4;
		}
		else if (x > 830 && x < 920) {
			wetsuit = 5;
		}
	}
	else if (y > 260 && y < 310) {
		draw2 = true;
		if (x > 350 && x < 500) {
			hoods = 1;
		}
		else if (x > 530 && x < 620) {
			hoods = 2;
		}
		else if (x > 630 && x < 720) {
			hoods = 3;
		}
		else if (x > 730 && x < 820) {
			hoods = 4;
		}
		else if (x > 830 && x < 920) {
			hoods = 5;
		}
	}
	else if (y > 320 && y < 370) {
		draw3 = true;
		if (x > 350 && x < 500) {
			boots = 1;
		}
		else if (x > 530 && x < 620) {
			boots = 2;
		}
		else if (x > 630 && x < 720) {
			boots = 3;
		}
		else if (x > 730 && x < 820) {
			boots = 4;
		}
		else if (x > 830 && x < 920) {
			boots = 5;
		}
	}
	else if (y > 380 && y < 410) {
		draw4 = true;
		if (x > 350 && x < 500) {
			gloves = 1;
		}
		else if (x > 530 && x < 620) {
			gloves = 2;
		}
		else if (x > 630 && x < 720) {
			gloves = 3;
		}
		else if (x > 730 && x < 820) {
			gloves = 4;
		}
		else if (x > 830 && x < 920) {
			gloves = 5;
		}
	}
	else if (y > 470 && y < 520) {
		draw5 = true;
		if (x > 350 && x < 500) {
			boards = 1;
		}
		else if (x > 530 && x < 620) {
			boards = 2;
		}
		else if (x > 630 && x < 720) {
			boards = 3;
		}
		else if (x > 730 && x < 820) {
			boards = 4;
		}
		else if (x > 830 && x < 920) {
			boards = 5;
		}
	}
	else if (y > 530 && y < 590) {
		draw6 = true;
		if (x > 350 && x < 500) {
			leashes = 1;
		}
		else if (x > 530 && x < 600) {
			leashes = 2;
		}
		else if (x > 630 && x < 720) {
			leashes = 3;
		}
		else if (x > 730 && x < 820) {
			leashes = 4;
		}
		else if (x > 830 && x < 920) {
			leashes = 5;
		}
	}
	else if (y > 610 && y < 660) {
		draw7 = true;
		if (x > 350 && x < 500) {
			fins = 1;
		}
		else if (x > 530 && x < 620) {
			fins = 2;
		}
		else if (x > 630 && x < 720) {
			fins = 3;
		}
		else if (x > 730 && x < 820) {
			fins = 4;
		}
		else if (x > 830 && x < 920) {
			fins = 5;
		}
	}
	else if (y > 680 && y < 770) {
		draw8 = true;
		if (x > 350 && x < 500) {
			straps = 1;
		}
		else if (x > 530 && x < 620) {
			straps = 2;
		}
		else if (x > 630 && x < 720) {
			straps = 3;
		}
		else if (x > 730 && x < 820) {
			straps = 4;
		}
		else if (x > 830 && x < 920) {
			straps = 5;
		}
	}
}