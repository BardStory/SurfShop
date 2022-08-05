#pragma once
#ifndef _HEADER_H
#define _HEADER_H

//Makes sure to use the allegro library


#include "allegro5/allegro.h"
#include "allegro5/allegro_image.h"
#include "allegro5/allegro_primitives.h"
#include "allegro5/allegro_font.h"
#include "allegro5/allegro_ttf.h"
#include "allegro5/allegro_native_dialog.h"

#include <fstream>
#include <string>
#include <iostream>

//draws boxes around items for buttons
void DrawSquares();
//draws boxes around items for buttons for waivers/personal
void DrawSquaresPg2();
//draws boxes around the cart/account and back button for visibility
void DrawHeaders();
//check if a header has been pressed
void checkHeaders();
//checks mouse position
void mousecheck();
void mousecheck2();
//checks if the mouse button is pressed and where it is pressed
void mousebuttoncheck();
void mousebuttoncheck2();

//checks the reset buttons and submit buttons
void submitbuttoncheck();
void mouseRental();

//Bellow are functions for each form. They all do simmilar effects to buttoncheck and mousecheck
void mouseSurfboard();
void surfboardbuttoncheck();
void DrawSquaresSurfboards();
void DrawWaiver();
void mouseWaiver();
void mousePurchase();
void DrawPurchase();
void mousePersonal();
void DrawTextBoxPersonal();
void mouseRental();
void DrawRental();

//calls the form functions when changing to new form
void waiverform();
void waiverAndPersonalform();
void personalform();
void surfboardform();
void erentalsform();
void equipmentform();
void appointmentform();
void aboutform();
void accountform();
void cartform();


void reset();












void headers();
//closes the if
#endif