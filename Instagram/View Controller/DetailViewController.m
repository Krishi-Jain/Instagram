//
//  DetailViewController.m
//  Instagram
//
//  Created by Krishi Jain on 6/30/22.
//

#import "DetailViewController.h"
#import <parse/Parse.h>
#import "HomeTimelineViewController.h"
@import Parse;

@interface DetailViewController ()

@end

@implementation DetailViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.detailsCaption.text = self.post.caption;
    self.deatailsUser.text = self.post.author.username;
    self.detailsImage.file = self.post[@"image"];
    NSDate *postDate = self.post.createdAt;
    NSDateComponentsFormatter *formatter = [[NSDateComponentsFormatter alloc] init];
    formatter.unitsStyle = NSDateComponentsFormatterUnitsStyleFull;
    formatter.allowedUnits = NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay | NSCalendarUnitHour;
    NSString *elapsed = [formatter stringFromDate:postDate toDate:[NSDate date]];
    self.deatilsDate.text = elapsed;
}

- (IBAction)backButtonDetails:(id)sender {
    [self dismissViewControllerAnimated:YES completion:nil];
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
