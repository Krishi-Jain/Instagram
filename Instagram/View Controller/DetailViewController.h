//
//  DetailViewController.h
//  Instagram
//
//  Created by Krishi Jain on 6/30/22.
//

#import <UIKit/UIKit.h>
#import "Parse/Parse.h"
#import "Post.h"
@import Parse;

NS_ASSUME_NONNULL_BEGIN

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Post *post;

@property (weak, nonatomic) IBOutlet PFImageView *detailsImage;
@property (weak, nonatomic) IBOutlet UILabel *detailsCaption;
@property (weak, nonatomic) IBOutlet UILabel *deatailsUser;
@property (weak, nonatomic) IBOutlet UILabel *deatilsDate;

@end

NS_ASSUME_NONNULL_END
