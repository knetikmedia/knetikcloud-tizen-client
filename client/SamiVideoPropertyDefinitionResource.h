/*
 * SamiVideoPropertyDefinitionResource.h
 * 
 * 
 */

#ifndef SamiVideoPropertyDefinitionResource_H_
#define SamiVideoPropertyDefinitionResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiPropertyDefinitionResource.h"
#include "SamiPropertyFieldListResource.h"
using Tizen::Base::Boolean;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiVideoPropertyDefinitionResource: public SamiObject {
public:
    SamiVideoPropertyDefinitionResource();
    SamiVideoPropertyDefinitionResource(String* json);
    virtual ~SamiVideoPropertyDefinitionResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiVideoPropertyDefinitionResource* fromJson(String* obj);

    SamiPropertyFieldListResource* getPFieldList();
    void setPFieldList(SamiPropertyFieldListResource* pField_list);
    String* getPName();
    void setPName(String* pName);
    Boolean* getPRequired();
    void setPRequired(Boolean* pRequired);
    String* getPType();
    void setPType(String* pType);
    String* getPFileType();
    void setPFileType(String* pFile_type);
    Integer* getPMaxHeight();
    void setPMaxHeight(Integer* pMax_height);
    Integer* getPMaxLength();
    void setPMaxLength(Integer* pMax_length);
    Integer* getPMaxWidth();
    void setPMaxWidth(Integer* pMax_width);
    Integer* getPMinHeight();
    void setPMinHeight(Integer* pMin_height);
    Integer* getPMinLength();
    void setPMinLength(Integer* pMin_length);
    Integer* getPMinWidth();
    void setPMinWidth(Integer* pMin_width);

private:
    SamiPropertyFieldListResource* pField_list;
String* pName;
Boolean* pRequired;
String* pType;
String* pFile_type;
Integer* pMax_height;
Integer* pMax_length;
Integer* pMax_width;
Integer* pMin_height;
Integer* pMin_length;
Integer* pMin_width;
};

} /* namespace Swagger */

#endif /* SamiVideoPropertyDefinitionResource_H_ */
