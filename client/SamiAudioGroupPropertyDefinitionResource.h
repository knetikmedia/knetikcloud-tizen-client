/*
 * SamiAudioGroupPropertyDefinitionResource.h
 * 
 * 
 */

#ifndef SamiAudioGroupPropertyDefinitionResource_H_
#define SamiAudioGroupPropertyDefinitionResource_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiFileGroupPropertyDefinitionResource.h"
#include "SamiPropertyFieldListResource.h"
using Tizen::Base::Boolean;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiAudioGroupPropertyDefinitionResource: public SamiObject {
public:
    SamiAudioGroupPropertyDefinitionResource();
    SamiAudioGroupPropertyDefinitionResource(String* json);
    virtual ~SamiAudioGroupPropertyDefinitionResource();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiAudioGroupPropertyDefinitionResource* fromJson(String* obj);

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
    Integer* getPMaxCount();
    void setPMaxCount(Integer* pMax_count);
    Long* getPMaxFileSize();
    void setPMaxFileSize(Long* pMax_file_size);
    Integer* getPMinCount();
    void setPMinCount(Integer* pMin_count);
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
Integer* pMax_count;
Long* pMax_file_size;
Integer* pMin_count;
Integer* pMax_length;
Integer* pMin_length;
};

} /* namespace Swagger */

#endif /* SamiAudioGroupPropertyDefinitionResource_H_ */
