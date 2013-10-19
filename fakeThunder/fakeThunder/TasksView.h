//
//  TasksView.h
//  fakeThunder
//
//  Created by Martian on 12-8-15.
//  Copyright (c) 2012年 MartianZ. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "TasksView.h"
#import "TaskEntity.h"
#import <TondarAPI/HYXunleiLixianAPI.h>
#import <TondarAPI/XunleiItemInfo.h>

@interface TasksView : NSViewController <NSTableViewDelegate, NSTableViewDataSource, TaskDelegate> {

    @private
    NSMutableArray *_tableContents;
    NSMutableArray *_observedVisibleItems;
    IBOutlet NSTableView *_tableViewMain;
    HYXunleiLixianAPI *TondarAPI;
    
    BOOL _useSmallRowHeight;
}

- (void)downloadSelectedTask;
- (IBAction)tblvwDoubleClick:(id)sender;

@end