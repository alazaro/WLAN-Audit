/*
 * KeyListController.h
 *
 * Copyright 2011 Roberto Estrada
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#import <UIKit/UIKit.h>

#import "GADBannerView.h"

@interface KeyListController : UITableViewController<UIAlertViewDelegate> {
    // Admob banner
    GADBannerView *adView;
    // Key list
    NSArray *keyList;
    // Network's essid
    NSString *wlanESSID;
    // Selected key
    NSUInteger selectedKey;
}

@property(nonatomic,retain) NSArray *keyList;
@property(nonatomic,retain) NSString *wlanESSID;

@end
