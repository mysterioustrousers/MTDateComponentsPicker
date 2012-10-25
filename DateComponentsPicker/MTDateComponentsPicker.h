//
//  MTDateComponentsPicker.h
//  FamilySearchMobile
//
//  Created by Adam Kirk on 10/12/12.
//  Copyright (c) 2012 FamilySearch. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol MTDateComponentsPickerDelegate;

@interface MTDateComponentsPicker : UIPickerView <UIPickerViewDataSource, UIPickerViewDelegate>

@property (nonatomic, weak) id<MTDateComponentsPickerDelegate> componentsDelegate;
@property (nonatomic, strong) NSDateComponents *dateComponents;

@property NSInteger minYear;
@property NSInteger maxYear;

@end



@protocol MTDateComponentsPickerDelegate <NSObject>
- (void)dateComponentsPicker:(MTDateComponentsPicker *)picker pickedDateComponents:(NSDateComponents *)dateComponents;
@end