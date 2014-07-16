/**
 * Copyright (c) 2000-2014 Liferay, Inc. All rights reserved.
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 2.1 of the License, or (at your option)
 * any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more
 * details.
 */
#import <Foundation/Foundation.h>
#import "LRBaseService.h"

/**
 * @author Bruno Farache
 */
@interface LRMobilewidgetsService_v6201 : LRBaseService

- (NSDictionary *)resetPasswordByEmailAddressWithCompanyId:(long long)companyId emailAddress:(NSString *)emailAddress error:(NSError **)error;
- (NSDictionary *)resetPasswordByScreenNameWithCompanyId:(long long)companyId screenName:(NSString *)screenName error:(NSError **)error;
- (NSDictionary *)resetPasswordByUserIdWithUserId:(long long)userId error:(NSError **)error;

@end