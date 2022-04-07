from collections import defaultdict
def roll_dice(n):
    '''list the results of rolls'''
    d = defaultdict(int)
    for i in range(n):
        res = roll()
        d[res] += 1    #accumulate results
        print(res)

    print ("RESULTS")
    #sort and print results.  Since there's only 11 items, 
    # There is no sense using `iteritems()` here.  We'd 
    # just have to change it for py3k...
    for key,value in sorted(d.items()):  
        percent = float(value)/n*100
        #print results.  Use explicit field widths to make sure the "bargraph" is aligned.
        print ('{0:2d}:{1:4d}\t({2:6f}%)\t{3}'.format(key,value,percent,int(percent)*'*'))


roll_dice(2000)
