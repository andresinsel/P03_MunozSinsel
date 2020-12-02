/*
* Copyright (c) 2014 - 2015, Freescale Semiconductor, Inc.
* Copyright 2016-2017 NXP
* All rights reserved.
*
* SPDX-License-Identifier: BSD-3-Clause
*/

/*!
\file       dtls_globals.c
\brief      This is the source file that contains parameters for the DTLS module that can be
            configured by the application 
*/

/*==================================================================================================
Include Files
==================================================================================================*/
#include "dtls.h"
#include "dtls_cfg.h"

#if DTLS_ENABLED
/*==================================================================================================
Private macros
==================================================================================================*/

/*==================================================================================================
Private type definitions
==================================================================================================*/

/*==================================================================================================
Private prototypes
==================================================================================================*/

/*==================================================================================================
Private global variables declarations
==================================================================================================*/

/*==================================================================================================
Public global variables declarations
==================================================================================================*/
/*! DTLS maximum simultaneous connecting clients */
const uint8_t gDtlsMaxSimConnectingClients = DTLS_MAX_SIMULTANEOUS_CONNECTING_CLIENTS;
/*! DTLS maximum number of contexts */
const uint8_t gDtlsMaxContexts = DTLS_MAX_CONTEXTS;
/*! DTLS contexts ponters table */
dtlsContext_t *aDtlsContexts[DTLS_MAX_CONTEXTS];

/*==================================================================================================
Private functions
==================================================================================================*/

/*==================================================================================================
Public functions
==================================================================================================*/

#endif /* DTLS_ENABLED */
