//
//  MTViewController.m
//  DateComponentsPicker
//
//  Created by Adam Kirk on 10/25/12.
//  Copyright (c) 2012 Mysterious Trousers. All rights reserved.
//

#import "MTViewController.h"
#import "MTDateComponentsPicker.h"

@interface MTViewController ()
@property (weak, nonatomic) IBOutlet MTDateComponentsPicker *dateComponentsPicker;
@end

@implementation MTViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	_dateComponentsPicker.dateComponents = [[NSDateComponents alloc] init];
	
}

@end
