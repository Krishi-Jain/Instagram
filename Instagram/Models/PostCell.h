//
//  PostCell.h
//  Instagram
//
//  Created by Krishi Jain on 6/29/22.
//

#import <UIKit/UIKit.h>
#import "Post.h"
#import "Parse/PFImageView.h"

NS_ASSUME_NONNULL_BEGIN

@interface PostCell : UITableViewCell

@property(strong, nonatomic)Post *post;
@property (weak, nonatomic) IBOutlet PFImageView *postImageView;
@property (weak, nonatomic) IBOutlet UILabel *captionLabel;
@property (weak, nonatomic) IBOutlet UILabel *usernameLabel;



@end

NS_ASSUME_NONNULL_END
