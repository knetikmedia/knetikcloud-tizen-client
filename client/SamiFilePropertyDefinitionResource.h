/*
 * SamiFilePropertyDefinitionResource.h
 * 
 * 
 */

#ifndef SamiFilePropertyDefinitionResource_H_
#define SamiFilePropertyDefinitionResource_H_

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
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiFilePropertyDefinitionResource: public SamiObject {
public:
    SamiFilePropertyDefinitionResource();
    SamiFilePropertyDefinitionResource(String* json);
    virtual ~SamiFilePropertyDefinitionResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiFilePropertyDefinitionResource* fromJson(String* obj);

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
    Long* getPMaxFileSize();
    void setPMaxFileSize(Long* pMax_file_size);

private:
    SamiPropertyFieldListResource* pField_list;
String* pName;
Boolean* pRequired;
String* pType;
String* pFile_type;
Long* pMax_file_size;
};

} /* namespace Swagger */

#endif /* SamiFilePropertyDefinitionResource_H_ */
