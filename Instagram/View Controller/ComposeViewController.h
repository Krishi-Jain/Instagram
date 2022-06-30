//
//  ComposeViewController.h
//  Instagram
//
//  Created by Krishi Jain on 6/29/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ComposeViewControllerDelegate

@end

@interface ComposeViewController : UIViewController

@property (nonatomic, weak) id<ComposeViewControllerDelegate> delegate;
@property (weak, nonatomic) IBOutlet UIImageView *ImagePost;
@property (weak, nonatomic) IBOutlet UITextField *captionPost;

@end

NS_ASSUME_NONNULL_END
