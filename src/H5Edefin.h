/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Copyright by The HDF Group.                                               *
 * Copyright by the Board of Trustees of the University of Illinois.         *
 * All rights reserved.                                                      *
 *                                                                           *
 * This file is part of HDF5.  The full HDF5 copyright notice, including     *
 * terms governing use, modification, and redistribution, is contained in    *
 * the COPYING file, which can be found at the root of the source code       *
 * distribution tree, or in https://support.hdfgroup.org/ftp/HDF5/releases.  *
 * If you do not have access to either file, you may request a copy from     *
 * help@hdfgroup.org.                                                        *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/* Generated automatically by bin/make_err -- do not edit */
/* Add new errors to H5err.txt file */


#ifndef _H5Edefin_H
#define _H5Edefin_H

/* Major error IDs */
__thread hid_t H5E_FUNC_g           = FAIL;      /* Function entry/exit */
__thread hid_t H5E_FILE_g           = FAIL;      /* File accessibilty */
__thread hid_t H5E_SOHM_g           = FAIL;      /* Shared Object Header Messages */
__thread hid_t H5E_SYM_g            = FAIL;      /* Symbol table */
__thread hid_t H5E_PLUGIN_g         = FAIL;      /* Plugin for dynamically loaded library */
__thread hid_t H5E_VFL_g            = FAIL;      /* Virtual File Layer */
__thread hid_t H5E_INTERNAL_g       = FAIL;      /* Internal error (too specific to document in detail) */
__thread hid_t H5E_BTREE_g          = FAIL;      /* B-Tree node */
__thread hid_t H5E_REFERENCE_g      = FAIL;      /* References */
__thread hid_t H5E_DATASPACE_g      = FAIL;      /* Dataspace */
__thread hid_t H5E_RESOURCE_g       = FAIL;      /* Resource unavailable */
__thread hid_t H5E_RS_g             = FAIL;      /* Reference Counted Strings */
__thread hid_t H5E_FARRAY_g         = FAIL;      /* Fixed Array */
__thread hid_t H5E_HEAP_g           = FAIL;      /* Heap */
__thread hid_t H5E_ATTR_g           = FAIL;      /* Attribute */
__thread hid_t H5E_IO_g             = FAIL;      /* Low-level I/O */
__thread hid_t H5E_EFL_g            = FAIL;      /* External file list */
__thread hid_t H5E_TST_g            = FAIL;      /* Ternary Search Trees */
__thread hid_t H5E_PAGEBUF_g        = FAIL;      /* Page Buffering */
__thread hid_t H5E_FSPACE_g         = FAIL;      /* Free Space Manager */
__thread hid_t H5E_DATASET_g        = FAIL;      /* Dataset */
__thread hid_t H5E_STORAGE_g        = FAIL;      /* Data storage */
__thread hid_t H5E_LINK_g           = FAIL;      /* Links */
__thread hid_t H5E_PLIST_g          = FAIL;      /* Property lists */
__thread hid_t H5E_DATATYPE_g       = FAIL;      /* Datatype */
__thread hid_t H5E_OHDR_g           = FAIL;      /* Object header */
__thread hid_t H5E_ATOM_g           = FAIL;      /* Object atom */
__thread hid_t H5E_NONE_MAJOR_g     = FAIL;      /* No error */
__thread hid_t H5E_SLIST_g          = FAIL;      /* Skip Lists */
__thread hid_t H5E_ARGS_g           = FAIL;      /* Invalid arguments to routine */
__thread hid_t H5E_CONTEXT_g        = FAIL;      /* API Context */
__thread hid_t H5E_EARRAY_g         = FAIL;      /* Extensible Array */
__thread hid_t H5E_PLINE_g          = FAIL;      /* Data filters */
__thread hid_t H5E_ERROR_g          = FAIL;      /* Error API */
__thread hid_t H5E_CACHE_g          = FAIL;      /* Object cache */

/* Minor error IDs */

/* Generic low-level file I/O errors */
__thread hid_t H5E_SEEKERROR_g      = FAIL;      /* Seek failed */
__thread hid_t H5E_READERROR_g      = FAIL;      /* Read failed */
__thread hid_t H5E_WRITEERROR_g     = FAIL;      /* Write failed */
__thread hid_t H5E_CLOSEERROR_g     = FAIL;      /* Close failed */
__thread hid_t H5E_OVERFLOW_g       = FAIL;      /* Address overflowed */
__thread hid_t H5E_FCNTL_g          = FAIL;      /* File control (fcntl) failed */

/* Resource errors */
__thread hid_t H5E_NOSPACE_g        = FAIL;      /* No space available for allocation */
__thread hid_t H5E_CANTALLOC_g      = FAIL;      /* Can't allocate space */
__thread hid_t H5E_CANTCOPY_g       = FAIL;      /* Unable to copy object */
__thread hid_t H5E_CANTFREE_g       = FAIL;      /* Unable to free object */
__thread hid_t H5E_ALREADYEXISTS_g  = FAIL;      /* Object already exists */
__thread hid_t H5E_CANTLOCK_g       = FAIL;      /* Unable to lock object */
__thread hid_t H5E_CANTUNLOCK_g     = FAIL;      /* Unable to unlock object */
__thread hid_t H5E_CANTGC_g         = FAIL;      /* Unable to garbage collect */
__thread hid_t H5E_CANTGETSIZE_g    = FAIL;      /* Unable to compute size */
__thread hid_t H5E_OBJOPEN_g        = FAIL;      /* Object is already open */

/* Heap errors */
__thread hid_t H5E_CANTRESTORE_g    = FAIL;      /* Can't restore condition */
__thread hid_t H5E_CANTCOMPUTE_g    = FAIL;      /* Can't compute value */
__thread hid_t H5E_CANTEXTEND_g     = FAIL;      /* Can't extend heap's space */
__thread hid_t H5E_CANTATTACH_g     = FAIL;      /* Can't attach object */
__thread hid_t H5E_CANTUPDATE_g     = FAIL;      /* Can't update object */
__thread hid_t H5E_CANTOPERATE_g    = FAIL;      /* Can't operate on object */

/* Function entry/exit interface errors */
__thread hid_t H5E_CANTINIT_g       = FAIL;      /* Unable to initialize object */
__thread hid_t H5E_ALREADYINIT_g    = FAIL;      /* Object already initialized */
__thread hid_t H5E_CANTRELEASE_g    = FAIL;      /* Unable to release object */

/* Property list errors */
__thread hid_t H5E_CANTGET_g        = FAIL;      /* Can't get value */
__thread hid_t H5E_CANTSET_g        = FAIL;      /* Can't set value */
__thread hid_t H5E_DUPCLASS_g       = FAIL;      /* Duplicate class name in parent class */
__thread hid_t H5E_SETDISALLOWED_g  = FAIL;      /* Disallowed operation */

/* Free space errors */
__thread hid_t H5E_CANTMERGE_g      = FAIL;      /* Can't merge objects */
__thread hid_t H5E_CANTREVIVE_g     = FAIL;      /* Can't revive object */
__thread hid_t H5E_CANTSHRINK_g     = FAIL;      /* Can't shrink container */

/* Object header related errors */
__thread hid_t H5E_LINKCOUNT_g      = FAIL;      /* Bad object header link count */
__thread hid_t H5E_VERSION_g        = FAIL;      /* Wrong version number */
__thread hid_t H5E_ALIGNMENT_g      = FAIL;      /* Alignment error */
__thread hid_t H5E_BADMESG_g        = FAIL;      /* Unrecognized message */
__thread hid_t H5E_CANTDELETE_g     = FAIL;      /* Can't delete message */
__thread hid_t H5E_BADITER_g        = FAIL;      /* Iteration failed */
__thread hid_t H5E_CANTPACK_g       = FAIL;      /* Can't pack messages */
__thread hid_t H5E_CANTRESET_g      = FAIL;      /* Can't reset object */
__thread hid_t H5E_CANTRENAME_g     = FAIL;      /* Unable to rename object */

/* System level errors */
__thread hid_t H5E_SYSERRSTR_g      = FAIL;      /* System error message */

/* I/O pipeline errors */
__thread hid_t H5E_NOFILTER_g       = FAIL;      /* Requested filter is not available */
__thread hid_t H5E_CALLBACK_g       = FAIL;      /* Callback failed */
__thread hid_t H5E_CANAPPLY_g       = FAIL;      /* Error from filter 'can apply' callback */
__thread hid_t H5E_SETLOCAL_g       = FAIL;      /* Error from filter 'set local' callback */
__thread hid_t H5E_NOENCODER_g      = FAIL;      /* Filter present but encoding disabled */
__thread hid_t H5E_CANTFILTER_g     = FAIL;      /* Filter operation failed */

/* Group related errors */
__thread hid_t H5E_CANTOPENOBJ_g    = FAIL;      /* Can't open object */
__thread hid_t H5E_CANTCLOSEOBJ_g   = FAIL;      /* Can't close object */
__thread hid_t H5E_COMPLEN_g        = FAIL;      /* Name component is too long */
__thread hid_t H5E_PATH_g           = FAIL;      /* Problem with path to object */

/* No error */
__thread hid_t H5E_NONE_MINOR_g     = FAIL;      /* No error */

/* Plugin errors */
__thread hid_t H5E_OPENERROR_g      = FAIL;      /* Can't open directory or file */

/* File accessibilty errors */
__thread hid_t H5E_FILEEXISTS_g     = FAIL;      /* File already exists */
__thread hid_t H5E_FILEOPEN_g       = FAIL;      /* File already open */
__thread hid_t H5E_CANTCREATE_g     = FAIL;      /* Unable to create file */
__thread hid_t H5E_CANTOPENFILE_g   = FAIL;      /* Unable to open file */
__thread hid_t H5E_CANTCLOSEFILE_g  = FAIL;      /* Unable to close file */
__thread hid_t H5E_NOTHDF5_g        = FAIL;      /* Not an HDF5 file */
__thread hid_t H5E_BADFILE_g        = FAIL;      /* Bad file ID accessed */
__thread hid_t H5E_TRUNCATED_g      = FAIL;      /* File has been truncated */
__thread hid_t H5E_MOUNT_g          = FAIL;      /* File mount error */

/* Object atom related errors */
__thread hid_t H5E_BADATOM_g        = FAIL;      /* Unable to find atom information (already closed?) */
__thread hid_t H5E_BADGROUP_g       = FAIL;      /* Unable to find ID group information */
__thread hid_t H5E_CANTREGISTER_g   = FAIL;      /* Unable to register new atom */
__thread hid_t H5E_CANTINC_g        = FAIL;      /* Unable to increment reference count */
__thread hid_t H5E_CANTDEC_g        = FAIL;      /* Unable to decrement reference count */
__thread hid_t H5E_NOIDS_g          = FAIL;      /* Out of IDs for group */

/* Cache related errors */
__thread hid_t H5E_CANTFLUSH_g      = FAIL;      /* Unable to flush data from cache */
__thread hid_t H5E_CANTUNSERIALIZE_g = FAIL;      /* Unable to mark metadata as unserialized */
__thread hid_t H5E_CANTSERIALIZE_g  = FAIL;      /* Unable to serialize data from cache */
__thread hid_t H5E_CANTTAG_g        = FAIL;      /* Unable to tag metadata in the cache */
__thread hid_t H5E_CANTLOAD_g       = FAIL;      /* Unable to load metadata into cache */
__thread hid_t H5E_PROTECT_g        = FAIL;      /* Protected metadata error */
__thread hid_t H5E_NOTCACHED_g      = FAIL;      /* Metadata not currently cached */
__thread hid_t H5E_SYSTEM_g         = FAIL;      /* Internal error detected */
__thread hid_t H5E_CANTINS_g        = FAIL;      /* Unable to insert metadata into cache */
__thread hid_t H5E_CANTPROTECT_g    = FAIL;      /* Unable to protect metadata */
__thread hid_t H5E_CANTUNPROTECT_g  = FAIL;      /* Unable to unprotect metadata */
__thread hid_t H5E_CANTPIN_g        = FAIL;      /* Unable to pin cache entry */
__thread hid_t H5E_CANTUNPIN_g      = FAIL;      /* Unable to un-pin cache entry */
__thread hid_t H5E_CANTMARKDIRTY_g  = FAIL;      /* Unable to mark a pinned entry as dirty */
__thread hid_t H5E_CANTMARKCLEAN_g  = FAIL;      /* Unable to mark a pinned entry as clean */
__thread hid_t H5E_CANTMARKUNSERIALIZED_g = FAIL;      /* Unable to mark an entry as unserialized */
__thread hid_t H5E_CANTMARKSERIALIZED_g = FAIL;      /* Unable to mark an entry as serialized */
__thread hid_t H5E_CANTDIRTY_g      = FAIL;      /* Unable to mark metadata as dirty */
__thread hid_t H5E_CANTCLEAN_g      = FAIL;      /* Unable to mark metadata as clean */
__thread hid_t H5E_CANTEXPUNGE_g    = FAIL;      /* Unable to expunge a metadata cache entry */
__thread hid_t H5E_CANTRESIZE_g     = FAIL;      /* Unable to resize a metadata cache entry */
__thread hid_t H5E_CANTDEPEND_g     = FAIL;      /* Unable to create a flush dependency */
__thread hid_t H5E_CANTUNDEPEND_g   = FAIL;      /* Unable to destroy a flush dependency */
__thread hid_t H5E_CANTNOTIFY_g     = FAIL;      /* Unable to notify object about action */
__thread hid_t H5E_LOGGING_g        = FAIL;      /* Failure in the cache logging framework */
__thread hid_t H5E_LOGFAIL_g        = FAIL;      /* old H5E_LOGGING_g (maintained for binary compatibility) */
__thread hid_t H5E_CANTCORK_g       = FAIL;      /* Unable to cork an object */
__thread hid_t H5E_CANTUNCORK_g     = FAIL;      /* Unable to uncork an object */

/* Link related errors */
__thread hid_t H5E_TRAVERSE_g       = FAIL;      /* Link traversal failure */
__thread hid_t H5E_NLINKS_g         = FAIL;      /* Too many soft links in path */
__thread hid_t H5E_NOTREGISTERED_g  = FAIL;      /* Link class not registered */
__thread hid_t H5E_CANTMOVE_g       = FAIL;      /* Can't move object */
__thread hid_t H5E_CANTSORT_g       = FAIL;      /* Can't sort objects */

/* Parallel MPI errors */
__thread hid_t H5E_MPI_g            = FAIL;      /* Some MPI function failed */
__thread hid_t H5E_MPIERRSTR_g      = FAIL;      /* MPI Error String */
__thread hid_t H5E_CANTRECV_g       = FAIL;      /* Can't receive data */
__thread hid_t H5E_CANTGATHER_g     = FAIL;      /* Can't gather data */
__thread hid_t H5E_NO_INDEPENDENT_g = FAIL;      /* Can't perform independent IO */

/* Dataspace errors */
__thread hid_t H5E_CANTCLIP_g       = FAIL;      /* Can't clip hyperslab region */
__thread hid_t H5E_CANTCOUNT_g      = FAIL;      /* Can't count elements */
__thread hid_t H5E_CANTSELECT_g     = FAIL;      /* Can't select hyperslab */
__thread hid_t H5E_CANTNEXT_g       = FAIL;      /* Can't move to next iterator location */
__thread hid_t H5E_BADSELECT_g      = FAIL;      /* Invalid selection */
__thread hid_t H5E_CANTCOMPARE_g    = FAIL;      /* Can't compare objects */
__thread hid_t H5E_CANTAPPEND_g     = FAIL;      /* Can't append object */

/* Argument errors */
__thread hid_t H5E_UNINITIALIZED_g  = FAIL;      /* Information is uinitialized */
__thread hid_t H5E_UNSUPPORTED_g    = FAIL;      /* Feature is unsupported */
__thread hid_t H5E_BADTYPE_g        = FAIL;      /* Inappropriate type */
__thread hid_t H5E_BADRANGE_g       = FAIL;      /* Out of range */
__thread hid_t H5E_BADVALUE_g       = FAIL;      /* Bad value */

/* B-tree related errors */
__thread hid_t H5E_NOTFOUND_g       = FAIL;      /* Object not found */
__thread hid_t H5E_EXISTS_g         = FAIL;      /* Object already exists */
__thread hid_t H5E_CANTENCODE_g     = FAIL;      /* Unable to encode value */
__thread hid_t H5E_CANTDECODE_g     = FAIL;      /* Unable to decode value */
__thread hid_t H5E_CANTSPLIT_g      = FAIL;      /* Unable to split node */
__thread hid_t H5E_CANTREDISTRIBUTE_g = FAIL;      /* Unable to redistribute records */
__thread hid_t H5E_CANTSWAP_g       = FAIL;      /* Unable to swap records */
__thread hid_t H5E_CANTINSERT_g     = FAIL;      /* Unable to insert object */
__thread hid_t H5E_CANTLIST_g       = FAIL;      /* Unable to list node */
__thread hid_t H5E_CANTMODIFY_g     = FAIL;      /* Unable to modify record */
__thread hid_t H5E_CANTREMOVE_g     = FAIL;      /* Unable to remove object */

/* Datatype conversion errors */
__thread hid_t H5E_CANTCONVERT_g    = FAIL;      /* Can't convert datatypes */
__thread hid_t H5E_BADSIZE_g        = FAIL;      /* Bad size for object */

#endif /* H5Edefin_H */
