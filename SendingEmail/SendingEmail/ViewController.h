//
//  ViewController.h
//  SendingEmail
//
//  Created by LLDM on 29/07/2016.
//  Copyright © 2016 LLDM. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>

@interface ViewController : UIViewController {
    MFMailComposeViewController *mailComposer;
    ViewController *vc;
}

-(IBAction)sendMail:(id)sender;


@end

