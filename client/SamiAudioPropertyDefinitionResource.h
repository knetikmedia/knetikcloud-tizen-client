/*
 * SamiAudioPropertyDefinitionResource.h
 * 
 * 
 */

#ifndef SamiAudioPropertyDefinitionResource_H_
#define SamiAudioPropertyDefinitionResource_H_

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

class SamiAudioPropertyDefinitionResource: public SamiObject {
public:
    SamiAudioPropertyDefinitionResource();
    SamiAudioPropertyDefinitionResource(String* json);
    virtual ~SamiAudioPropertyDefinitionResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiAudioPropertyDefinitionResource* fromJson(String* obj);

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
    Integer* getPMaxLength();
    void setPMaxLength(Integer* pMax_length);
    Integer* getPMinLength();
    void setPMinLength(Integer* pMin_length);

private:
    SamiPropertyFieldListResource* pField_list;
String* pName;
Boolean* pRequired;
String* pType;
String* pFile_type;
Integer* pMax_length;
Integer* pMin_length;
};

} /* namespace Swagger */

#endif /* SamiAudioPropertyDefinitionResource_H_ */
