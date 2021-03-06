// ------------------------------------------------------------
// Copyright (c) Microsoft Corporation.  All rights reserved.
// Licensed under the MIT License (MIT). See License.txt in the repo root for license information.
// ------------------------------------------------------------

#include "stdafx.h"

using namespace Data;
using namespace Common;
using namespace Data::TStore;

Common::Global<StoreEventSource> StoreEventSource::Events = Common::make_global<StoreEventSource>();
