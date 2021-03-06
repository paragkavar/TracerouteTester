//
//  MMViewController.h
//  TracerouteTester
//
//  Created by Bruno Bulic on 3/20/13.
//  Copyright (c) 2013 MarlinMobile. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MMTracerouteExecutor.h"
#import "MMHostResolutionOperation.h"

@interface MMViewController : UIViewController<MMTracerouteExecutorDelegate>

@property (weak, nonatomic) IBOutlet UITextField *hostnameField;
@property (weak, nonatomic) IBOutlet UIButton *confirmButton;
@property (weak, nonatomic) IBOutlet UITextView *resultTestView;

@property (nonatomic, strong) MMHostResolutionOperation * op;

- (IBAction)buttonTapped:(id)sender;

@end
