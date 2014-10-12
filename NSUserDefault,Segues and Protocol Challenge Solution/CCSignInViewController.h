//
//  CCSignInViewController.h
//  NSUserDefault,Segues and Protocol Challenge Solution
//
//  Created by Sakshi Jain on 12/10/14.
//
//

#import <UIKit/UIKit.h>

@interface CCSignInViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *usernameTextField;
@property (strong, nonatomic) IBOutlet UITextField *passwordTextField;

- (IBAction)loginButtonPressed:(UIButton *)sender;
- (IBAction)createItemBarButtonPressed:(UIBarButtonItem *)sender;


@end
