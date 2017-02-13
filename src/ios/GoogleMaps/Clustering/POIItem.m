//
//  POIItem.m
//  ePrice.it
//
//  Created by Luca Nicoletti on 07/02/17.
//  Copyright © 2017  Sopra Steria 2017 All rights reserved.
//

#import "POIItem.h"

@implementation POIItem


- (instancetype)initWithPosition:(CLLocationCoordinate2D)position name:(NSString *)name imageUrl:(NSString *) imageUrl {
    _position = position;
    _name = name;
    _imageUrl = imageUrl;
    return [self init];
}

- (void) setImageUrl:(NSString *)imageUrl {
    _imageUrl = imageUrl;
}

@end
