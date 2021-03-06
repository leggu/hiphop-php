/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_SplFileInfo_h9ae251af__
#define __GENERATED_cls_SplFileInfo_h9ae251af__

#include <runtime/base/hphp_system.h>
#include <system/gen/sys/literal_strings_remap.h>
#include <system/gen/sys/scalar_arrays_remap.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

extern StaticString s_sys_ss00000000;
extern StaticString s_sys_ss914a58e9;
extern StaticString s_sys_ss5d909898;
extern StaticString s_sys_ss0d42ecf6;

extern VarNR s_sys_svs00000000;
extern VarNR s_sys_svs914a58e9;
extern VarNR s_sys_svs5d909898;
extern VarNR s_sys_svs0d42ecf6;

/* SRC: classes/splfile.php line 11 */
FORWARD_DECLARE_CLASS(SplFileInfo);
extern const ObjectStaticCallbacks cw_SplFileInfo;
class c_SplFileInfo : public ExtObjectData {
  public:

  // Properties
  Variant m_rsrc;

  // Class Map
  DECLARE_CLASS_NO_SWEEP(SplFileInfo, SplFileInfo, ObjectData)
  static const ClassPropTable os_prop_table;
  c_SplFileInfo(const ObjectStaticCallbacks *cb = &cw_SplFileInfo) : ExtObjectData(cb), m_rsrc(Variant::nullInit) {}
  public: void t___construct(Variant v_file_name);
  public: c_SplFileInfo *create(CVarRef v_file_name);
  public: String t_getpath();
  public: String t_getfilename();
  public: Object t_getfileinfo(CVarRef v_class_name = NAMVAR(s_sys_svs00000000, ""));
  public: String t_getbasename(CVarRef v_suffix = NAMVAR(s_sys_svs00000000, ""));
  public: String t_getpathname();
  public: Object t_getpathinfo(CVarRef v_class_name = NAMVAR(s_sys_svs00000000, ""));
  public: int64 t_getperms();
  public: int64 t_getinode();
  public: int64 t_getsize();
  public: int64 t_getowner();
  public: int64 t_getgroup();
  public: int64 t_getatime();
  public: int64 t_getmtime();
  public: int64 t_getctime();
  public: String t_gettype();
  public: bool t_iswritable();
  public: bool t_isreadable();
  public: bool t_isexecutable();
  public: bool t_isfile();
  public: bool t_isdir();
  public: bool t_islink();
  public: String t_getlinktarget();
  public: Variant t_getrealpath();
  public: String t___tostring();
  public: Object t_openfile(CVarRef v_mode = NAMVAR(s_sys_svs0d42ecf6, "r"), CVarRef v_use_include_path = false_varNR, CVarRef v_context = null_variant);
  public: void t_setfileclass(CVarRef v_class_name = NAMVAR(s_sys_svs5d909898, "SplFileObject"));
  public: void t_setinfoclass(CVarRef v_class_name = NAMVAR(s_sys_svs914a58e9, "SplFileInfo"));
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(getpath);
  DECLARE_METHOD_INVOKE_HELPERS(getfilename);
  DECLARE_METHOD_INVOKE_HELPERS(getfileinfo);
  DECLARE_METHOD_INVOKE_HELPERS(getbasename);
  DECLARE_METHOD_INVOKE_HELPERS(getpathname);
  DECLARE_METHOD_INVOKE_HELPERS(getpathinfo);
  DECLARE_METHOD_INVOKE_HELPERS(getperms);
  DECLARE_METHOD_INVOKE_HELPERS(getinode);
  DECLARE_METHOD_INVOKE_HELPERS(getsize);
  DECLARE_METHOD_INVOKE_HELPERS(getowner);
  DECLARE_METHOD_INVOKE_HELPERS(getgroup);
  DECLARE_METHOD_INVOKE_HELPERS(getatime);
  DECLARE_METHOD_INVOKE_HELPERS(getmtime);
  DECLARE_METHOD_INVOKE_HELPERS(getctime);
  DECLARE_METHOD_INVOKE_HELPERS(gettype);
  DECLARE_METHOD_INVOKE_HELPERS(iswritable);
  DECLARE_METHOD_INVOKE_HELPERS(isreadable);
  DECLARE_METHOD_INVOKE_HELPERS(isexecutable);
  DECLARE_METHOD_INVOKE_HELPERS(isfile);
  DECLARE_METHOD_INVOKE_HELPERS(isdir);
  DECLARE_METHOD_INVOKE_HELPERS(islink);
  DECLARE_METHOD_INVOKE_HELPERS(getlinktarget);
  DECLARE_METHOD_INVOKE_HELPERS(getrealpath);
  DECLARE_METHOD_INVOKE_HELPERS(__tostring);
  DECLARE_METHOD_INVOKE_HELPERS(openfile);
  DECLARE_METHOD_INVOKE_HELPERS(setfileclass);
  DECLARE_METHOD_INVOKE_HELPERS(setinfoclass);
};
ObjectData *coo_SplFileInfo() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_SplFileInfo_h9ae251af__
