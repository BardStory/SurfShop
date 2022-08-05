#include "variables.h"
#include "header.h"

//Draws the boxes when mouse scrolls over Cart/Account/Back button
void DrawHeaders() {

	ALLEGRO_COLOR black = al_map_rgb(0, 0, 0);
	ALLEGRO_COLOR white = al_map_rgb(255, 255, 255);
	ALLEGRO_COLOR pink = al_map_rgb(245, 103, 103);

	//cart
	if (drawcart == true) {
		al_draw_rectangle(880, 5, 990, 95, black, 5);
		drawcart= false;
	}
	//back
	else if (drawback== true) {
		al_draw_rectangle(710, 5, 780, 95, black, 5);
		drawback = false;
	}
	//profile
	else if (drawaccount == true) {
		al_draw_rectangle(790, 5, 880, 95, black, 5);
		drawaccount = false;
	}
	else {
		al_draw_rectangle(710, 5, 780, 95, pink, 5);
		al_draw_rectangle(880, 5, 990, 95, pink, 5);
		al_draw_rectangle(790, 5, 880, 95, pink, 5);
	}
}

//Draw the squares when the mouse is over them for the first page
void DrawSquares() {

	ALLEGRO_COLOR black = al_map_rgb(0, 0, 0);
	ALLEGRO_COLOR white = al_map_rgb(255, 255, 255);
	ALLEGRO_COLOR pink = al_map_rgb(245, 103, 103);
	

	if (draw1 == true) {
		al_draw_rectangle(50, 200, 300, 500, black, 5);
		draw1 = false;
	}
	else if (draw2 == true) {
		al_draw_rectangle(400, 200, 600, 500, black, 5);
		draw2 = false;
	}
	else if (draw3 == true) {
		al_draw_rectangle(700, 200, 930, 500, black, 5);
		draw3 = false;
	}
	else if (draw4 == true) {
		al_draw_rectangle(10, 500, 300, 850, black, 5);
		draw4 = false;
	}
	else if (draw5 == true) {
		al_draw_rectangle(400, 500, 650, 850, black, 5);
		draw5 = false;
	}
	else if (draw6 == true) {
		al_draw_rectangle(680, 500, 900, 850, black, 5);
		draw6 = false;
	}
	else if (draw7 == true) {
		al_draw_rectangle(790, 5, 880, 95, black, 5);
		draw7 = false;
	}
	else if (draw8 == true) {
		al_draw_rectangle(880, 5, 990, 95, black, 5);
		draw8 = false;
	}
	else if (draw9 == true) {
		al_draw_rectangle(710, 5, 780, 95, black, 5);
		draw9 = false;
	}
	else {
		al_draw_rectangle(50, 200, 300, 500, white, 5);
		al_draw_rectangle(400, 200, 600, 500, white, 5);
		al_draw_rectangle(700, 200, 930, 500, white, 5);
		al_draw_rectangle(10, 500, 300, 850, white, 5);
		al_draw_rectangle(400, 500, 650, 850, white, 5);
		al_draw_rectangle(680, 500, 900, 850, white, 5);
		al_draw_rectangle(790, 5, 880, 95, pink, 5);
		al_draw_rectangle(880, 5, 990, 95, pink, 5);
		al_draw_rectangle(710, 5, 780, 95, pink, 5);

	}
}

void DrawSquaresPg2() {

	ALLEGRO_COLOR black = al_map_rgb(0, 0, 0);
	ALLEGRO_COLOR white = al_map_rgb(255, 255, 255);
	ALLEGRO_COLOR pink = al_map_rgb(245, 103, 103);

	if (draw1 == true) {
		al_draw_rectangle(150, 400, 450, 800, black, 5);
		draw1 = false;
	}else if (draw2 == true) {
		al_draw_rectangle(580, 400, 850, 800, black, 5);
		draw2 = false;
	}else if (draw7 == true) {
		al_draw_rectangle(790, 5, 880, 95, black, 5);
		draw7 = false;
	}else if (draw8 == true) {
		al_draw_rectangle(880, 5, 990, 95, black, 5);
		draw8 = false;
	}
	else if (draw9 == true) {
		al_draw_rectangle(710, 5, 780, 95, black, 5);
		draw9 = false;
	}
	else {
		al_draw_rectangle(150, 400, 450, 800, white, 5);
		al_draw_rectangle(580, 400, 850, 800, white, 5);
		al_draw_rectangle(790, 5, 880, 95, pink, 5);
		al_draw_rectangle(880, 5, 990, 95, pink, 5);
		al_draw_rectangle(710, 5, 780, 95, pink, 5);
	}
}

void DrawTextBoxPersonal() {
	
	ALLEGRO_COLOR black = al_map_rgb(0, 0, 0);
	ALLEGRO_COLOR white = al_map_rgb(255, 255, 255);
	ALLEGRO_COLOR pink = al_map_rgb(245, 103, 103);
	
	if (draw1 == true) {
		al_draw_filled_rectangle(550, 450, 800, 475, white);
		al_draw_rectangle(550, 450, 800, 475, pink, 5);
		draw1 = false;
		
	}else if (draw2 == true) {
		al_draw_filled_rectangle(550, 500, 800, 525, white);
		al_draw_rectangle(550, 500, 800, 525, pink, 5);
		draw2 = false;
	}
	else if (draw3 == true) {
		al_draw_filled_rectangle(550, 560, 800, 585, white);
		al_draw_rectangle(550, 560, 800, 585, pink, 5);
		draw3 = false;
	}
	else if (draw4 == true) {
		al_draw_filled_rectangle(550, 620, 800, 645, white);
		al_draw_rectangle(550, 620, 800, 645, pink, 5);
		draw4 = false;
	}
	else if (draw5 == true) {
		al_draw_filled_rectangle(550, 680, 800, 705, white);
		al_draw_rectangle(550, 680, 800, 705, pink, 5);
		draw5 = false;
	}
	else if (draw6 == true) {
		al_draw_filled_rectangle(550, 740, 800, 765, white);
		al_draw_rectangle(550, 740, 800, 765, pink, 5);
		draw6 = false;
	}
	else if (draw7 == true) {
		al_draw_filled_rectangle(550, 790, 800, 815, white);
		al_draw_rectangle(550, 790, 800, 815, pink, 5);
		draw7 = false;
	}
	else {
		
		al_draw_rectangle(550, 450, 800, 475, black, 5);
		al_draw_rectangle(550, 500, 800, 525, black, 5);
		al_draw_rectangle(550, 560, 800, 585, black, 5);
		al_draw_rectangle(550, 620, 800, 645, black, 5);
		al_draw_rectangle(550, 680, 800, 705, black, 5);
		al_draw_rectangle(550, 740, 800, 765, black, 5);
		al_draw_rectangle(550, 790, 800, 815, black, 5);
	}
	
}

void DrawSquaresSurfboards() {
	ALLEGRO_COLOR black = al_map_rgb(0, 0, 0);
	ALLEGRO_COLOR white = al_map_rgb(255, 255, 255);
	ALLEGRO_COLOR pink = al_map_rgb(245, 103, 103);


	if (draw1 == true) {
		al_draw_rectangle(150, 370, 300, 700, black, 5);
		draw1 = false;
	}
	else if (draw2 == true) {
		al_draw_rectangle(400, 370, 600, 700, black, 5);
		draw2 = false;
	}
	else if (draw3 == true) {
		al_draw_rectangle(650, 370, 850, 700, black, 5);
		draw3 = false;
	}
	else if (draw7 == true) {
		al_draw_rectangle(790, 5, 880, 95, black, 5);
		draw7 = false;
	}
	else if (draw8 == true) {
		al_draw_rectangle(880, 5, 990, 95, black, 5);
		draw8 = false;
	}
	else if (draw9 == true) {
		al_draw_rectangle(710, 5, 780, 95, black, 5);
		draw9 = false;
	}
	else {
		al_draw_rectangle(150, 370, 300, 700, white, 5);
		al_draw_rectangle(400, 370, 600, 700, white, 5);
		al_draw_rectangle(650, 370, 850, 700, white, 5);
		al_draw_rectangle(790, 5, 880, 95, pink, 5);
		al_draw_rectangle(880, 5, 990, 95, pink, 5);
		al_draw_rectangle(710, 5, 780, 95, pink, 5);
	
	}

}

void DrawWaiver() {
	ALLEGRO_COLOR black = al_map_rgb(0, 0, 0);
	ALLEGRO_COLOR white = al_map_rgb(255, 255, 255);
	ALLEGRO_COLOR pink = al_map_rgb(245, 103, 103);
	
	if (draw1 == true) {
		al_draw_filled_rectangle(300, 650, 500, 700, white);
		al_draw_rectangle(300, 650, 500, 700, pink, 5);
		draw1 = false;
	}
	else if (draw2 == true) {
		al_draw_filled_rectangle(620, 650, 800, 700, white);
		al_draw_rectangle(620, 650, 800, 700,pink, 5);
		draw2 = false;
	}
	else {
		al_draw_rectangle(300, 650, 500, 700, black, 5);
		al_draw_rectangle(620, 650, 800, 700, black, 5);
	}
}

void cleancirclebutton(int temp, int ytemp) {
	ALLEGRO_COLOR black = al_map_rgb(0, 0, 0);
	ALLEGRO_COLOR white = al_map_rgb(255, 255, 255);

	al_draw_filled_circle(452, ytemp, 3, white);
	al_draw_filled_circle(566, ytemp, 3, white);
	al_draw_filled_circle(680, ytemp, 3, white);
	al_draw_filled_circle(794, ytemp, 3, white);
	al_draw_filled_circle(907, ytemp, 3, white);
	
	
}
//draws when a button is pressed on rentals or purchased
void circlebutton(int temp, int ytemp) {
	ALLEGRO_COLOR black = al_map_rgb(0, 0, 0);
	ALLEGRO_COLOR white = al_map_rgb(255, 255, 255);

	switch (temp) {
	case0:
		al_draw_filled_circle(566, ytemp, 3, white);
		al_draw_filled_circle(680, ytemp, 3, white);
		al_draw_filled_circle(794, ytemp, 3, white);
		al_draw_filled_circle(907, ytemp, 3, white);
		al_draw_filled_circle(452, ytemp, 3, white);
	case 1:
		al_draw_filled_circle(566, ytemp, 3, white);
		al_draw_filled_circle(680, ytemp, 3, white);
		al_draw_filled_circle(794, ytemp, 3, white);
		al_draw_filled_circle(907, ytemp, 3, white);
		al_draw_filled_circle(452, ytemp, 3, black);
		break;
	case 2:
		al_draw_filled_circle(452, ytemp, 3, white);
		al_draw_filled_circle(680, ytemp, 3, white);
		al_draw_filled_circle(794, ytemp, 3, white);
		al_draw_filled_circle(907, ytemp, 3, white);
		al_draw_filled_circle(566, ytemp, 3, black);
		break;
	case 3:
		al_draw_filled_circle(452, ytemp, 3, white);
		al_draw_filled_circle(566, ytemp, 3, white);
		al_draw_filled_circle(680, ytemp, 3, black);
		al_draw_filled_circle(794, ytemp, 3, white);
		al_draw_filled_circle(907, ytemp, 3, white);
		break;
	case 4:
		al_draw_filled_circle(452, ytemp, 3, white);
		al_draw_filled_circle(566, ytemp, 3, white);
		al_draw_filled_circle(680, ytemp, 3, white);
		al_draw_filled_circle(794, ytemp, 3, black);
		al_draw_filled_circle(907, ytemp, 3, white);
		break;
	case 5:
		al_draw_filled_circle(452, ytemp, 3, white);
		al_draw_filled_circle(566, ytemp, 3, white);
		al_draw_filled_circle(680, ytemp, 3, white);
		al_draw_filled_circle(794, ytemp, 3, white);
		al_draw_filled_circle(907, ytemp, 3, black);
		break;
	}
}

void DrawRental() {
	ALLEGRO_COLOR black = al_map_rgb(0, 0, 0);
	ALLEGRO_COLOR white = al_map_rgb(255, 255, 255);
	ALLEGRO_COLOR pink = al_map_rgb(245, 103, 103);


	if(draw0 == true){
		cleancirclebutton(rentwetsuit, 220);
		cleancirclebutton(renthoods, 276);
		cleancirclebutton(rentboots, 333);
		cleancirclebutton(rentgloves, 378);
		cleancirclebutton(rentboards, 485);
		cleancirclebutton(rentleashes, 550);
		cleancirclebutton(rentfins, 613);
		cleancirclebutton(rentstraps, 690);
		draw0 = false;
	}

	if (draw1 == true) {

		circlebutton(rentwetsuit, 220);
		draw1 = false;
	}else if (draw2 == true) {
		circlebutton(renthoods, 276);
		draw2 = false;
	}
	else if (draw3 == true) {
		circlebutton(rentboots, 333);
		draw3 = false;
	}
	else if (draw4 == true) {
		circlebutton(rentgloves, 378);
		draw4 = false;
	}
	else if (draw5 == true) {
		circlebutton(rentboards, 485);
		draw5 = false;
	}
	else if (draw6 == true) {
		circlebutton(rentleashes, 550);
		draw6 = false;
	}
	else if (draw7 == true) {
		circlebutton(rentfins,613);
		draw7 = false;
	}
	else if (draw8 == true) {
		circlebutton(rentstraps,690);
		draw8 = false;
	}
	
}

void DrawPurchase() {
	ALLEGRO_COLOR black = al_map_rgb(0, 0, 0);
	ALLEGRO_COLOR white = al_map_rgb(255, 255, 255);
	ALLEGRO_COLOR pink = al_map_rgb(245, 103, 103);
	if (draw0 == true) {
		cleancirclebutton(wetsuit, 220);
		cleancirclebutton(hoods, 276);
		cleancirclebutton(boots, 333);
		cleancirclebutton(gloves, 378);
		cleancirclebutton(boards, 485);
		cleancirclebutton(leashes, 550);
		cleancirclebutton(fins, 613);
		cleancirclebutton(straps, 690);
		draw0 = false;
	}

	if (draw1 == true) {

		circlebutton(wetsuit, 220);
		draw1 = false;
	}
	else if (draw2 == true) {
		circlebutton(hoods, 276);
		draw2 = false;
	}
	else if (draw3 == true) {
		circlebutton(boots, 333);
		draw3 = false;
	}
	else if (draw4 == true) {
		circlebutton(gloves, 378);
		draw4 = false;
	}
	else if (draw5 == true) {
		circlebutton(boards, 485);
		draw5 = false;
	}
	else if (draw6 == true) {
		circlebutton(leashes, 550);
		draw6 = false;
	}
	else if (draw7 == true) {
		circlebutton(fins, 613);
		draw7 = false;
	}
	else if (draw8 == true) {
		circlebutton(straps, 690);
		draw8 = false;
	}

}





























