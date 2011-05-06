//
//  EntryViewController2.h
//  MobileKeePass
//
//  Created by Jason Rush on 5/1/11.
//  Copyright 2011 Self. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TextFieldCell.h"
#import "UrlFieldCell.h"
#import "TextViewCell.h"
#import "PasswordFieldCell.h"
#import "Database.h"

@interface EntryViewController : UITableViewController <UITextFieldDelegate, UITextViewDelegate, UIActionSheetDelegate> {
    TextFieldCell *titleCell;
    UrlFieldCell *urlCell;
    TextFieldCell *usernameCell;
    PasswordFieldCell *passwordCell;
    TextViewCell *commentsCell;
    CGFloat originalHeight;

    Entry *entry;
    BOOL dirty;
}

@property (nonatomic, retain) Entry *entry;

- (void)setDirty;
- (void)backPressed:(id)sender;

@end
