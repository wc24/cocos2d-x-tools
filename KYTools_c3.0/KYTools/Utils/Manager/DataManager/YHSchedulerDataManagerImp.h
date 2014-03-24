//
//  YHSchedulerDataManagerImp.h
//  MonsterHunter
//
//  Created by Zhenyu Yao on 14-1-10.
//
//

#ifndef __MonsterHunter__YHSchedulerDataManagerImp__
#define __MonsterHunter__YHSchedulerDataManagerImp__

#include <KYTools/Utils/Manager/DataManager/YHDataManagerImp.h>

/**
 * 使用 CCScheduler 的实现
 * @author Zhenyu Yao
 */
class YHSchedulerDataManagerImp : public YHDataManagerImp
{
public:
	
	YHSchedulerDataManagerImp()
	{
	}
	
	virtual ~YHSchedulerDataManagerImp()
	{
	}
	
	virtual void addFile(const std::string & file);
	virtual void removeFile(const std::string & file);
	virtual void removeAllFiles();
	virtual void start();
	virtual void stop();
	virtual bool completed();
	virtual YHByteArray * dataForFile(const std::string & file);
	virtual cocos2d::CCTexture2D * textureForFile(const std::string & file);
	virtual cocos2d::CCDictionary * dictionaryForFile(const std::string & file);
	virtual cocos2d::CCArray * arrayForFile(const std::string & file);
    virtual std::vector<std::string> allFiles();
	
	virtual void update(float dt);
};

#endif /* defined(__MonsterHunter__YHSchedulerDataManagerImp__) */














































////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// end file


