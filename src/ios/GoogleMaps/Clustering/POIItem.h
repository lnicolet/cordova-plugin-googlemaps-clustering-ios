//
//  POIItem.h
//  ePrice.it
//
//  Created by Luca Nicoletti on 07/02/17.
//  Copyright © 2017  Sopra Steria 2017 All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GMUMarkerClustering.h"

// Point of Interest Item which implements the GMUClusterItem protocol.
@interface POIItem : NSObject<GMUClusterItem>

@property(nonatomic, readonly) CLLocationCoordinate2D position;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) NSString *imageUrl;

- (instancetype)initWithPosition:(CLLocationCoordinate2D)position name:(NSString *)name imageUrl:(NSString*) imageUrl;

- (void) setImageUrl:(NSString *)imageUrl;

@end
