//
//  DetailViewController.h
//  PodspecTest
//
//  Created by Stone.Yu on 16/8/26.
//  Copyright © 2016年 Stone.Yu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

