//
//  BirdsDetailViewController.h
//  BirdWatching
//
//  Created by Grant Summers on 2/24/13.
//  Copyright (c) 2013 Grant Summers. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BirdsDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
