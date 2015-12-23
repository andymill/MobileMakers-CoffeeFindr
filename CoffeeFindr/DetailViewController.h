//
//  DetailViewController.h
//  CoffeeFindr
//
//  Created by Andrew Miller on 12/22/15.
//  Copyright (c) 2015 MobileMakers. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoffeePlace.h"

@interface DetailViewController : UIViewController
@property CoffeePlace *coffeePlace;
@property CLLocation *currentLocation;

@end
