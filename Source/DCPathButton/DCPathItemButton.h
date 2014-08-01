//
//  DCPathItemButton.h
//  DCPathButton
//
//  Created by tang dixi on 31/7/14.
//  Copyright (c) 2014 Tangdxi. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol DCPathItemButtonDelegate <NSObject>

- (void)itemButtonTapped;

@end

@interface DCPathItemButton : UIImageView

@property (weak, nonatomic) id<DCPathItemButtonDelegate> delegate;
@property (strong, nonatomic) UIImage *backgroundImage;
@property (strong, nonatomic) UIImage *backgroungHighlightedImage;

@end