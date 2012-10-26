//
//  MTDateComponentsPicker.h
//  FamilySearchMobile
//
//  Created by Adam Kirk on 10/12/12.
//  Copyright (c) 2012 FamilySearch. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface MTDateComponentsPicker : UIPickerView <UIPickerViewDataSource, UIPickerViewDelegate>

@property (nonatomic, strong) NSDateComponents *dateComponents;
@property (nonatomic, strong) void (^onChange)(NSDateComponents *selectedDateComponents);

@property NSInteger minYear;
@property NSInteger maxYear;

@end
