//
//  Bean+Protected.h
//  Bean OSX Library
//
//  Created by Raymond Kampmeier on 3/10/14.
//  Copyright (c) 2014 Punch Through Design. All rights reserved.
//

#import <IOBluetooth/IOBluetooth.h>
#import "Bean.h"

@interface Bean (Protected)

-(id)initWithPeripheral:(CBPeripheral*)peripheral beanManager:(BeanManager*)manager;
-(void)interrogateAndValidate;

-(CBPeripheral*)peripheral;

-(void)setState:(BeanState)state;
-(void)setRSSI:(NSNumber*)rssi;
-(void)setAdvertisementData:(NSDictionary*)adData;
-(void)setLastDiscovered:(NSDate*)date;
-(void)setBeanManager:(BeanManager*)manager;

@end