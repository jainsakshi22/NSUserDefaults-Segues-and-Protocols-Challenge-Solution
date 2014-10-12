//
//  CCSignInViewController.m
//  NSUserDefault,Segues and Protocol Challenge Solution
//
//  Created by Sakshi Jain on 12/10/14.
//
//

#import "CCSignInViewController.h"

@interface CCSignInViewController ()

@end

@implementation CCSignInViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


-(void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    if ([segue.destinationViewController isKindOfClass:[CCCreateAccountViewController class]])
    {
        CCCreateAccountViewController *createAccountVC = segue.destinationViewController;
        createAccountVC.delegate = self;
    }
}

- (IBAction)createItemBarButtonPressed:(UIBarButtonItem *)sender
{
    //Without this, Segues will not work
    [self performSegueWithIdentifier:@"toCreateAccountViewControlerSegue"  sender:sender];
}

- (IBAction)loginButtonPressed:(UIButton *)sender
{
    [self performSegueWithIdentifier:@"toViewControllerSegue" sender:sender];
}

#pragma mark - CCCreateAccountViewControllerDelegate method

-(void)didCancel
{
    [self dismissViewControllerAnimated:YES completion:nil];
}

-(void)didCreateAccount
{
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
