//
//  CCCreateAccountViewController.h
//  NSUserDefault,Segues and Protocol Challenge Solution
//
//  Created by Sakshi Jain on 12/10/14.
//
//

#import <UIKit/UIKit.h>

@interface CCCreateAccountViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *usernameTextFields;
@property (strong, nonatomic) IBOutlet UITextField *passwordTextField;
@property (strong, nonatomic) IBOutlet UITextField *confirmPasswordTextField;

- (IBAction)createAccountButtonPressed:(UIButton *)sender;
- (IBAction)cancelButtonPressed:(UIButton *)sender;


@end
