//
//  CCCreateAccountViewController.h
//  NSUserDefault,Segues and Protocol Challenge Solution
//
//  Created by Sakshi Jain on 12/10/14.
//
//

#import <UIKit/UIKit.h>

@protocol CCCreateAccountViewControllerDelegate <NSObject>

-(void)didCancel;
-(void)didCreateAccount;

@end

@interface CCCreateAccountViewController : UIViewController

@property (weak,nonatomic) id <CCCreateAccountViewControllerDelegate> delegate;

@property (strong, nonatomic) IBOutlet UITextField *usernameTextFields;
@property (strong, nonatomic) IBOutlet UITextField *passwordTextField;
@property (strong, nonatomic) IBOutlet UITextField *confirmPasswordTextField;

- (IBAction)createAccountButtonPressed:(UIButton *)sender;
- (IBAction)cancelButtonPressed:(UIButton *)sender;


@end
