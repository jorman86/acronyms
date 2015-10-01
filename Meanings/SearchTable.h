//
//  SearchTable.h
//  Meanings
//
//  Created by jorge jesus mendoza balleza on 9/30/15.
//  Copyright © 2015 jorge jesus mendoza balleza. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SearchTable : UITableViewController<UITableViewDelegate,UITableViewDataSource,UITextFieldDelegate>{
    NSMutableArray *results;
}


@end
