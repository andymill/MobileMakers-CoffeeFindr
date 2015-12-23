//
//  CoffeePlace.h
//  CoffeeFindr
//
//  Created by Andrew Miller on 12/21/15.
//  Copyright (c) 2015 MobileMakers. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface CoffeePlace : NSObject

@property MKMapItem *mapItem;
@property float milesDifference;

@end
